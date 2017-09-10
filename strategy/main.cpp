#include <iostream>

using namespace std;

class PronounciationStrategy
{
public:
    virtual void applyVocalSettings()=0;
};

class IndianMale: public PronounciationStrategy
{
public:
    virtual void applyVocalSettings()
    {
        cout<<"Indian Male Pro: Applying "<<endl;
    }
};

class BritishFemale: public PronounciationStrategy
{
public:
    virtual void applyVocalSettings()
    {
        cout<<"British FeMale Pro: Applying "<<endl;
    }
};

class Language
{
private:
    int numberOfAlphabets;
    bool isWirttenFromLeftToRight;
    PronounciationStrategy *mSpeakingStrategy;
public:
    Language(PronounciationStrategy *aStrategy):mSpeakingStrategy(aStrategy){}
    void speak(const char *data)
    {
        mSpeakingStrategy->applyVocalSettings();
        cout<<"Speaking " <<data<<endl;
    }
};

int main()
{
    IndianMale *vinod=new IndianMale();
    Language *hindi=new Language(vinod);
    hindi->speak("Namsthe");

    BritishFemale *daisy=new BritishFemale();
    Language *ukEnglish=new Language(daisy);
    ukEnglish->speak("Good Morning");

    return 0;
}























/*
class TTSGender
{
public:
    virtual void applyVoiceSettings()=0;
};

class IndianMan:public TTSGender
{
public:
    virtual void applyVoiceSettings()
    {
        cout<<"Applying Voice Settings for Indian Man"<<endl;
    }
};

class DutchWomen:public TTSGender
{
public:
    virtual void applyVoiceSettings()
    {
        cout<<"Applying Voice Settings for Dutch Women"<<endl;
    }
};

class TTSCharacter
{
private:
    TTSGender *mGender;
public:
    TTSCharacter(TTSGender *aGender) :mGender(aGender)
    {
    }

    void speak(const char *data)
    {
        mGender->applyVoiceSettings();
        cout<<"Speaking "<<data<<endl;
    }
};


int main()
{
    TTSGender *indianMan=new IndianMan();
    TTSCharacter *vinod=new TTSCharacter(indianMan);

    TTSGender *dutchWomen=new DutchWomen();
    TTSCharacter *daisy=new TTSCharacter(dutchWomen);

    vinod->speak("Hello World");
    daisy->speak("Goedemorgen Heer !");

    return 0;
}
*/
