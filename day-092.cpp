class TrieNode{
    public:
        vector<TrieNode*>childnode;
        bool wordend;
        TrieNode(): childnode(26,nullptr),wordend(false){}

};

class WordDictionary {

public:
TrieNode*root;
    WordDictionary():root(new TrieNode()) {
    }
    
    void addWord(string word) {
        TrieNode*cur=root;
        for(char c:word)
        {
            if(cur->childnode[c-'a']==nullptr)
            {
                cur->childnode[c-'a']=new TrieNode();
            }
            cur=cur->childnode[c-'a'];
        }
        cur->wordend=true;
    }
    
    bool search(string word) {
        return dfs(word,0,root);
    }
    private:
        bool dfs(string word, int i,TrieNode* root)
        {
            TrieNode*cur=root;
            for(int j=i;j<word.size();j++)
            {
                char c=word[j];
                if(c=='.')
                {
                    for(TrieNode*child : cur->childnode)
                    {
                        if(child!=nullptr && dfs(word,j+1,child))
                        {
                            return true;
                        }

                    }
                    return false;
                }
                else
                {
                    if(cur->childnode[c-'a']==nullptr)
                    {
                        return false;
                    }
                    cur=cur->childnode[c-'a'];
                }
            }
            return cur->wordend;
        }
};
