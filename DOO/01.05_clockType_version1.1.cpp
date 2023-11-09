class clockType{
private:
    //Atributos
    int hrs;
    int mins;
    int secs;
public:
    //Constructores
    clockType(int hours, int minutes, int seconds);
    clockType();
    //Metodos
    void setTime(int h,int m,int s);
    void getTime()const;
    void printTime()const;
    void incrementSeconds();
    void incrementMinutes();
    void incrementHours();
    bool equalTime(const clockType &otherTime)const;
};
