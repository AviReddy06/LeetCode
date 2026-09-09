class Solution {
public:
    string defangIPaddr(string address) {
        std::string out;
        for(int i = 0;i<address.size();i++){
            if(address[i]=='.'){
                out = out + "[.]";
            }else{
                out = out+address[i];
            }
        }
        return out;
    }
};