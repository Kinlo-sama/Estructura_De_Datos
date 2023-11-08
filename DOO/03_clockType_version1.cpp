class clockType{
private:
    int hrs;
    int mins;
    int secs;
public:
    void setTime(int h,int m,int s);
    void getTime()const;
    void printTime()const;
    void incrementSeconds();
    void incrementMinutes();
    void incrementHours();
    bool equalTime(const clockType &otherTime)const;
};
