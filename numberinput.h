#ifndef numberinput_h
#define numberinput_h

class NumberInput {
private:
    int    n;
    int    k;
    double n1;
    double n2;
    
public:
    NumberInput();
    
    void set_n();
    void set_k();
    void set_n1();
    void set_n2();
    
    int    get_n()  { return n;  };
    int    get_k()  { return k;  };
    double get_n1() { return n1; };
    double get_n2() { return n2; };
};

#endif /* numberinput_h */
