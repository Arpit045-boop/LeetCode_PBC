/*
 * Below is the interface for Iterator, which is already defined for you.
 * **DO NOT** modify the interface for Iterator.
 *
 *  class Iterator {
 *		struct Data;
 * 		Data* data;
 *  public:
 *		Iterator(const vector<int>& nums);
 * 		Iterator(const Iterator& iter);
 *
 * 		// Returns the next element in the iteration.
 *		int next();
 *
 *		// Returns true if the iteration has more elements.
 *		bool hasNext() const;
 *	};
 */

class PeekingIterator : public Iterator {
public:
    stack<int> st;
    vector<int> v;
	PeekingIterator(const vector<int>& nums) : Iterator(nums) {
	    // Initialize any member here.
	    // **DO NOT** save a copy of nums and manipulate it directly.
	    // You should only use the Iterator interface methods.
        v=nums;
        reverse(v.begin(),v.end());
        for(int i:v){
            st.push(i);
        }
	    
	}
	
    // Returns the next element in the iteration without advancing the iterator.
	int peek() {
        return st.top();
	}
	
	// hasNext() and next() should behave the same as in the Iterator interface.
	// Override them if needed.
	int next() {
	    int r=st.top();
        st.pop();
        return r;
	}
	
	bool hasNext() const {
	    if(st.empty()){
            return false;
        }
        return true;
	}
};