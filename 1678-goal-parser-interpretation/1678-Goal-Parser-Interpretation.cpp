class Solution {
public:
    string interpret(string command) {
        std::string out;
        int i = 0;
        while(i<command.size()){
            if(command[i]=='('&&command[i+1]==')'){
                out = out+'o';
                i+=2;
            }else if(command[i]=='('&&command[i+1]=='a'){
                i++;
                out = out+command[i];
                i++;
            }else if(command[i]==')'){
                i++;
            }else{
                out = out + command[i];
                i++;
            }
        }
        return out;
    }
};