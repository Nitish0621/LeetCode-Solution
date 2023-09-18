class Solution {
public:
    int count=0,count2=0;
    int mostWordsFound(vector<string>& sentences) {
        for(int i=0;i<sentences.size();i++)
        {  count=0;
            for(int j=0;sentences[i][j]!='\0';j++)
            {
                if(sentences[i][j]==' ')
                    count++;
            }

            if(count+1>count2)
            {
              count2=count+1;
            }   
                
        }
        return count2;
    }
};