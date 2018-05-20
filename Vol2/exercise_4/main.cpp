class X {
    public:
        void f() {}
};

class Y {
    public:
        void g() {}
};

template<typename T> class Z {
    T t;
    public:
    void a() { t.f(); }
    void b() { t.g(); }
};

int main() {
    Z<X> zx;
    zx.a(); // Doesn't create Z<X>::b()
    Z<Y> zy;
    zy.b(); // Doesn't create Z<Y>::a()
} ///:~
