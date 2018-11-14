#include <iostream>
#include <math.h>
#include <map>
#include <string>
#include <vector>
using namespace std;
class input{
    private:
        map<string,double> elements;
        vector<string> name = {"t","t_oe","a_0","a_1","a_2","t_dg","sprt_a","m","a_cube","m_0","Dn","e","omega_0","C_uc","C_us","C_rc","C_rs","C_lc","C_ls","i0","idot","w_0","wdot","T_w_oe",};
    public:
    input();
    ~input();
    void debug();
};
