What will be the output 

int main()
{
        int N = 5;
        string str = "";
        for(int i=1; i<=N; i++){
            int j = i;
            while(j != 0){
                
               str = str + "*";
               j--;
             
            }
            str = str + " ";
        }
        return str;
}