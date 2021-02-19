struct GrandFather
{
    virtual ~GrandFather() {}

    virtual void fcn_a(bool);
            void fcn_b();
    virtual void fcn_c() const;
};

struct Father : GrandFather
{
    void fcn_a(bool);
    void fcn_b();
    virtual void fcn_d();
};

struct Son : Father
{
    void fcn_a(bool);
    void fcn_c();
};

struct GrandSon : Son
{
    void fcn_a(char, int);
    void fcn_c() const;
    void fcn_d();
};

Son          real_son;
GrandSon     real_grand_son;
Father       real_father;
GrandFather  real_grand_father;

Father&      son_as_father          = real_son;
Father&      grand_son_as_father    = real_grand_son;
GrandFather& son_as_grand_father    = real_son;
GrandFather& father_as_grand_father = real_father;

/**
 * (1) = il compile pas puisqu'il n'y a pas de définitions pour ce prototype de fonction dans F ou GF
 * (2) = Compile pas: shadowing
 * (3) = GrandSon::fcn_c
 * (4) = Compile pas: shadowing
 * (5) = GrandFather::fcn_c
 * (6) = Father::fcn_d
 **/