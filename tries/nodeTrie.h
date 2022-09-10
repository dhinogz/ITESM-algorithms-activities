class nodeTrie
{
    public:
        nodeTrie(char c, nodeTrie *p);
        nodeTrie* getChild(char c);
        nodeTrie* addChild(nodeTrie *node);
        void setEnd(bool e);
        bool getEnd();

    private:
        char letter;
        bool end;
        nodeTrie *parent;
        nodeTrie* child[];
};

nodeTrie::nodeTrie(char c, nodeTrie *p)
{
    parent = p;
    letter = c;
    letter = c;
    end = false;
    for (int i = 0; i < 26; i++)
    {
        child[i] = nullptr;
    }
}


nodeTrie* nodeTrie::getChild(char c)
{
    return child[c-'a'];
}


nodeTrie* nodeTrie::addChild(nodeTrie *node)
{
    child[node->letter - 'a'] = node;
    return child[node->letter - 'a'];
}

void nodeTrie::setEnd(bool e)
{
    end = e;
}

bool nodeTrie::getEnd()
{
    return end;
}
