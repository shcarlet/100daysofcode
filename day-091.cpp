class buildnode{
    public:
        buildnode*childnode[26];
        bool wordend;
        buildnode()
        {
            for(int i=0;i<26;i++)
            {
                childnode[i]=NULL;
            }
            wordend=false;
        }
};


class PrefixTree {
private:
      buildnode*root;
public:
    PrefixTree() {
      root=new buildnode();    
    }
    
    void insert(string word) {
        buildnode*node=root;
        int cur=0;
        for(int i=0;i<word.size();i++)
        {
            cur=word[i]-'a';
            if(node->childnode[cur]==NULL)
            {
                node->childnode[cur]=new buildnode();
            }
            node=node->childnode[cur];
            
        }
        node->wordend=true;
    }
    
    bool search(string word) {
        buildnode*node=root;
        int cur=0;
        for(int i=0;i<word.size();i++){
            cur=word[i]-'a';
        if(node->childnode[cur]==NULL)
        {
            return false;
        }
        node=node->childnode[cur];
    }
    return node->wordend;
    }
    
    bool startsWith(string prefix) {
        buildnode*node=root;
        int cur=0;
        for(int i=0;i<prefix.size();i++)
        {
            cur=prefix[i]-'a';
            if(node->childnode[cur]==NULL)
            {
                return false;
            }
            node=node->childnode[cur];
        }
        return true;
    }
};
