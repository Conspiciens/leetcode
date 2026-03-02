#include <iostream> 
#include <unordered_map> 
#include <queue> 

class Node {
    public: 
        int key; 
        int val; 
        
        Node *next; 
        Node *prev; 

        Node(int key, int val) : key(key), val(val), next(nullptr), prev(nullptr) {} 
} 


Node::Node(int key, int val) {
    this->key = key; 
    this->val = val; 
} 


class LRUCache {
    private: 
        std::unordered_map<int, Node*> map; 
        int capacity;
    
        Node *head = new Node(-1, -1); 
        Node *tail = new Node(-1, -1);  

    public: 
        LRUCache(int capacity); 
        int get(int key); 
        int put(int key, int value); 

        void remove(Node *node); 
        void add(Node *node); 

} 

LRUCache::LRUCache(int capacity) {
    this->capacity = capactiy; 
    this->head->next = tail; 
    this->tail->prev = head; 
} 

int LRUCache::get(int key) {
    if (!map.count(key))
        return -1; 

    remove(map[key]); 
    add(map[key]); 

    return map[key]->val; 
} 

void LRUCache::put(int key, int value) {
    if (map.count(key)) {
        Node *currNode = map[key]; 
        currNode->val = value; 
        remove(map[key]); 
        add(map[key]); 
        return; 
    } 

    if (map.size() >= capacity) {
        Node *rmNode = head->next; 
        remove(rmNode); 
        map.erase(rmNode->key); 
        delete rmNode; 
    }  

    Node *newNode = new Node(key, value); 
    add(newNode); 

    map[key] = newNode; 
} 

void LRUCache::remove(Node *node) {
    node->prev->next = node->next; 
    node->next->prev = node->prev; 
}

void LRUCache::add(Node *node) {
    Node *prevNode = tail->prev; 
    prevNode->next = node; 
    node->next = tail; 
    tail->prev = node;  
    node->prev = prevNode; 
}

int main() {

} 
