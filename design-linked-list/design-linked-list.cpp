struct Node {
    Node(int value) :
         val(value),
         next(nullptr),
         prev(nullptr) {}
    int val;
    Node *next;
    Node *prev;
};

class MyLinkedList {
public:
    
    MyLinkedList() : size_(0) {
        head_ = tail_ = new Node(-1);
        head_->next = tail_;
        tail_->prev = head_;
    }
    
    
    int get(int index) {
        if (0 <= index && index <= size_ / 2) {
            return forward(0, index, head_->next)->val;
        } else if (size_ / 2 < index && index < size_) {
            return backward(size_, index, tail_)->val;
        }
        return -1;
    }
    
    void addAtHead(int val) {
        add(head_, val);
    }
    
   
    void addAtTail(int val) {
        add(tail_->prev, val);
    }
    
   
    void addAtIndex(int index, int val) {
        if (0 <= index && index <= size_ / 2) {
            add(forward(0, index, head_->next)->prev, val);
        } else if (size_ / 2 < index && index <= size_) {
            add(backward(size_, index, tail_)->prev, val);
        }
    }
    

    void deleteAtIndex(int index) {
        if (0 <= index && index <= size_ / 2) {
            remove(forward(0, index, head_->next));
        } else if (size_ / 2 < index && index < size_) {
            remove(backward(size_, index, tail_));
        }
    }
    
private:
    void add(Node *preNode, int val) {
        auto node = new Node(val);
        node->prev = preNode;
        node->next = preNode->next;
        node->prev->next = node->next->prev = node;
        ++size_;
    }
        
    void remove(Node *node) {
        node->prev->next = node->next;
        node->next->prev = node->prev;
        --size_;
    }
        
    Node *forward(int start, int end, Node *curr) {
        while (start != end) {
            ++start;
            curr = curr->next;
        }
        return curr;
    }
    
    Node *backward(int start, int end, Node *curr) {
        while (start != end) {
            --start;
            curr = curr->prev;
        }
        return curr;
    }

    Node *head_;
    Node *tail_;
    int size_;
};


 