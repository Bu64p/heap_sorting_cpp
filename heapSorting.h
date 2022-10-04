class heapSorting
{
private:
    void heapify(int *, int, bool (*)(int, int));
    void build(int *, int);
    void exchange(int *, int, int);
    static bool ascending(int, int);
    static bool descending(int, int);
    int left(int);
    int right(int);
    int size;

public:
    heapSorting(int *, int, int = 1);
    static const int ASCENDING_ORDER = 1;
    static const int DESCENDING_ORDER = 0;
};

