class DinnerPlates {
    int cap;
    vector<vector<int>> stacks;
    set<int> available; // Indices of stacks with size < cap

public:
    DinnerPlates(int capacity) : cap(capacity) {}

    void push(int val) {
        if (available.empty()) {
            stacks.push_back({});
            available.insert(stacks.size() - 1);
        }

        int idx = *available.begin();
        stacks[idx].push_back(val);

        if (stacks[idx].size() == cap) {
            available.erase(idx);
        }
    }

    int pop() {
        if (stacks.empty()) return -1;
        return popAtStack(stacks.size() - 1);
    }

    int popAtStack(int index) {
        if (index < 0 || index >= stacks.size() || stacks[index].empty()) {
            return -1;
        }

        int val = stacks[index].back();
        stacks[index].pop_back();
        available.insert(index);

        // Trim trailing empty stacks so stacks.back() is always the rightmost non-empty stack
        while (!stacks.empty() && stacks.back().empty()) {
            available.erase(stacks.size() - 1);
            stacks.pop_back();
        }

        return val;
    }
};