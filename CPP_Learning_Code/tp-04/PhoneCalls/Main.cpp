#include "Person.h"
#include "Phone.h"
#include "HomePhone.h"
#include "MobilePhone.h"

int main()
{
    Person paul { "Paul", 3 };
    // doesn't compile anymore!
    // Phone  phone { paul };
    // phone.ring();

    // HomePhone homePhone { paul, 3 };
    // homePhone.ring();

    // HomePhone farPhone { paul, 10 };
    // farPhone.ring();

    // const Phone& normal_phone = farPhone;
    // normal_phone.ring();

    // MobilePhone mobile_phone { paul };
    // mobile_phone.ring();

    // const Phone& normal_phone1 = mobile_phone;
    // normal_phone1.ring();

    HomePhone far_phone { paul, -10 };
    const Phone& normal_phone2 = far_phone;
    normal_phone2.ring();

    return 0;
}

/**
 * 1.
 * En utilisant une référence, on fait de l'aggrégation.
 * const Person& fait partie de la classe Phone mais ne lui appartient pas.
 * Si phone est détruit, Person ne l'est pas.
 * 
 * On peut donc modifier l'état de Person depuis la classe ou depuis dehors.
 * Si on change sa position, elle est changée aussi dans la Person référencée par l'objet Phone.
 * 
 * 5.
 * On fait un appel virtuel sur une classe polymorphoique.
 * Lorsqu'on défini une classe polymorphique il faut déclarer au moins une fonction-membre virtuelle
 * et définir un destructeur virtuel à cette classe.
 * 
 * 8.
 * Le code compile car, même en ayant protégé l'accès au constructeur de Phone, on peut toujours construire
 * un HomePhone et le passer en référence à une variable de type Phone qui englobe HomePhone.
 * 
 * 9.
 * Il faut rendre la classe abstraite en mettant le constructeur dans le bloc protected
 * et en rendant au moins une fonction virtual pure.
 * 
 */