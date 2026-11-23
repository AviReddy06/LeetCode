class PeekingIterator : public Iterator {
    int nextVal;
    bool hasNextVal;

public:
    PeekingIterator(const vector<int>& nums) : Iterator(nums) {
        hasNextVal = Iterator::hasNext();
        if (hasNextVal) {
            nextVal = Iterator::next();
        }
    }

    int peek() {
        return nextVal;
    }

    int next() {
        int curr = nextVal;
        hasNextVal = Iterator::hasNext();
        if (hasNextVal) {
            nextVal = Iterator::next();
        }
        return curr;
    }

    bool hasNext() const {
        return hasNextVal;
    }
};