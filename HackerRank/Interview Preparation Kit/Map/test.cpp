int l = s.length();
    int x,i,j,cnt=0;
    string w1,w2;
    
    for(i=0;i<l;i++)
    {    
        for(x=1;x<=l-i;x++)
        {
            w1 = s.substr(i,x);
            sort(w1.begin(),w1.end());
            
            for(j=i+1;j<l-x+1;j++)
            {
                w2 = s.substr(j,x);
                sort(w2.begin(),w2.end());
                
                if(w1==w2)
                    cnt++;
            }
        }
    }
    
    return cnt;
