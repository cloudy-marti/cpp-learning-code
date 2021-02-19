class MinuteHand
{
    private:
        unsigned int _minutes;
    
    public:
        MinuteHand();
        
        const unsigned int get_minutes() const;

        void avance();
};