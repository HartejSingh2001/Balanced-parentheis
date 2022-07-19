class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;s[i]!='\0';i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[' )
            {
               st.push(s[i]); 
            }
            else
            {
                if(st.size()==0)
                {
                    return false;
                }
                char ch=st.top();
                st.pop();
                if((s[i]==')' && ch=='(')||(s[i]=='}' && ch=='{')||(s[i]==']' && ch=='['))
                {
                   continue;                                                        
                }
               else
               { return false;}// we can write return false statement without else block also and will work the same
                
            }//else block end
        }// for loop end
       return st.empty(); // this is very imp to write
    }//function end
};

/*
working of st.empty() is as follows--
        if(!st.empty())
        {
            return false;
        }
        return true;
*/
