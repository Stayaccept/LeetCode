class Solution {
public:
    int cmp(string a,string b){
        int i,j;
        for(i=0;i<a.size();i++)
        if(a[i]==' ')
        break;
        for(j=0;j<b.size();j++)
        if(b[j]==' ')
        break;
        i++,j++;
        if(a[i]>='a'&&a[i]<='z'&&b[j]>='a'&&b[j]<='z'){
            a=a.substr(i-1);
            b=b.substr(j-1);
            return a<b;
        }
        else if(a[i]>='a'&&a[i]<='z'&&b[j]>='0'&&b[j]<='9')
        return 1;
        else if(a[i]>='0'&&a[i]<='9'&&b[j]>='a'&&b[j]<='z')
        return 0;
        else
        return 0;

    }
    vector<string> reorderLogFiles(vector<string>& logs) {
        int i,j;
        for(i=0;i<logs.size();i++){
            for(j=0;j<logs.size()-i-1;j++){
                if(cmp(logs[j+1],logs[j]))
                swap(logs[j+1],logs[j]);
            }
        }
        return logs;
    }
};
