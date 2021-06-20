class LRUCache
{
    private:
    class node{
        public:
            int key;
            int value;
            node(int key){
                this->key=key;
                this->value=-1;
            }
            node(int key, int value){
                this->key=key;
                this->value=value;
            }
            bool operator == (node const& obj){
                if(this->key==obj.key)
                    return true;
                else
                    return false;
            }
    };
    int capacity;
    list<node> cache;
    
    public:
    LRUCache(int cap)
    {
        capacity=cap;
    }
    

    int get(int key)
    {
        node obj(key);
        list<node>::iterator it=find(cache.begin(),cache.end(),obj);
        if(it!=cache.end())
            return it->value;
        else
            return -1;
    }
    
    //Function for storing key-value pair.
    void set(int key, int value)
    {
        node obj(key,value);
        list<node>::iterator it=find(cache.begin(),cache.end(),obj);
        if(it!=cache.end()){
            cache.erase(it);
            cache.push_back(obj);
        }
        else{
            if(cache.size()==capacity){
                cache.erase(cache.begin());
                cache.push_back(obj);
            }
            else{
                cache.push_back(obj);
            }
        }
    }
};