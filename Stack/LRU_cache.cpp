#include <iostream>
#include <vector>
#include <stack>
#include <unordered_map>
using namespace std;

class Node{
    public:
    int key, val;
    Node* next;
    Node* prev;

    Node(int key, int val){
        this->key = key;
        this->val = val;
        next = prev = nullptr;
    }
};

class LRUcache{

    int capacity;

public:

    Node* head = new Node(-1,-1);
    Node* tail = new Node(-1,-1);

    unordered_map<int, Node*> m;

    LRUcache(int capacity){
        this->capacity = capacity;
        head->next = tail;
        tail->prev = head;
    }

    void addNode(Node* newNode){
        newNode->next = head->next;
        head->next->prev = newNode;
        head->next = newNode;
        newNode->prev = head;
    }

    void deleteNode(Node* oldNode){
        oldNode->prev->next = oldNode->next;
        oldNode->next->prev = oldNode->prev;
        oldNode->next = nullptr;
        oldNode->prev = nullptr;
        delete oldNode;
    }

    int get(int key){
        if(m.find(key) == m.end()) return -1;

        Node* temp = m[key];
        int ans = temp->val;
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        temp->next = head->next;
        temp->next->prev = temp;
        head->next = temp;
        temp->prev = head;

        return ans;
    }

    void put(int key, int value){
        if(m.find(key) != m.end()){
            Node* oldNode = m[key];
            deleteNode(oldNode);
            m.erase(key);
        }

        if(m.size() == capacity){
            m.erase(tail->prev->key);
            deleteNode(tail->prev);
        }

        Node* newNode = new Node(key, value);
        addNode(newNode);
        m[key] = newNode;
    }

    ~LRUcache(){
        Node* temp = head;
        while(head){
            head = head->next;
            delete temp;
        }
    }
};

int main(){

}