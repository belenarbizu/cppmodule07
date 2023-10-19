
template <class T>
class Array {
private:

public:
    Array();
    Array(unsigned int n);
    ~Array();
    Array(const Array & a);
    Array& operator=(const Array & a);

    int size() const;
};