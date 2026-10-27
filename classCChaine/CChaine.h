


class CChaine
{
private:
    // on créé un pointeur qui représente l'adresse du tableau de char
    char *m_chaine;


public:
    // constructeur par défault -> on cree un espace pour juste un char '\0'
    CChaine();

    // le constructeur si on fournit une chaine de char ex: "bonjour"
    CChaine(const char* tabChar);

    // le constructeur par copie
    CChaine(const CChaine &oCChaine);

    //destructeur de chaine
    ~CChaine();

    

};





