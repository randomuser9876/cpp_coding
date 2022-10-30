class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {
        int a1,b1,a2,b2;
        if(num1.length()==4){
            a1=(int)num1[0] ;
            b1= (int)num1[2];
        }
        if(num2.length()==4){
            a2=(int)num2[0];
            b2= (int)num2[2];
        }
        if(num1.length()==6){
            a1= (int)num1[1] ;
            b1= (int)num1[4];
            a1*= -1;
            b1*=-1;
        }
        if(num2.length()==6){
            a2= (int)num2[1] ;
            b2= (int)num2[4];
            a2*= -1;
            b2*=-1;
        }
        if(num1.length()==5){
            if(num1[0]=='-'){
                a1= (int)num1[1] ;
                b1= (int)num1[3];
                a1*= -1;
            }
            else{
                a1= num1[0] ;
                b1= (int)num1[3];
                b1*= -1;
            }
        }
        if(num2.length()==5){
            if(num2[0]=='-'){
                a2= '0'-num2[1] ;
                b2= num2[3]-'0';
                a2*= -1;
            }
            else{
                a2= (int)num2[0];
                b2= (int)num2[3];
                b2*= -1;
            }
        }
        int r1 = a1*a2 - b1*b2;
        int r2 = a1*b2 + b1*a2;
        string res = "";
        //if(r1<0) res+="-";
        res= res+to_string(b1)+"+";
        //if(r2<0) res+="-";
        res= res+to_string(r2)+"i";
        return res;
    }
};
