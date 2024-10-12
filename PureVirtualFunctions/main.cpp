#include <iostream>
#include <vector>

using namespace std;

class Shape { // Abstract Base Class
private:
    // Attributes common to all shapes
public:
    virtual void draw() = 0; // Pure Virtual Function
    virtual void rotate() = 0; // Pure Virtual Function
    virtual ~Shape() {}    
};

class Open_Shape: public Shape { // Abstract Class
public:
    virtual ~Open_Shape() {}
};

class Closed_Shape: public Shape { // Abstract Class
public:
    virtual ~Closed_Shape() {}
};

class Line: public Open_Shape { // Concrete Class
public:
    virtual void draw() override {
        std::cout << "Drawing a line" << std::endl;
    }

    virtual void rotate() override {
        std::cout << "Rotating a line" << std::endl;
    }

    virtual ~Line() {}
};

class Circle: public Closed_Shape { // Concrete Class
public:
    virtual void draw() override {
        std::cout << "Drawing a circle" << std::endl;
    }

    virtual void rotate() override {
        std::cout << "Rotating a circle" << std::endl;
    }

    virtual ~Circle() {}
};

class Square: public Closed_Shape { // Concrete Class
public:
    virtual void draw() override {
        std::cout << "Drawing a square" << std::endl;
    }

    virtual void rotate() override {
        std::cout << "Rotating a square" << std::endl;
    }

    virtual ~Square() {}
};

void screen_refresh(const std::vector<Shape *> &shapes) {
    std::cout << "Refreshing" << std::endl;
    for(const auto p : shapes) {
        p -> draw();
    }
}

int main() {
    // Shape s; // Error
    // Shape *p = new Shape(); // Error

    // Circle c; // Valid - Statically Bound
    // c.draw();

    // Shape *ptr = new Circle();
    // ptr -> draw(); // Dynamically Bound
    // ptr -> rotate(); // Dynamically Bound

    // delete ptr;

    Shape *s1 = new Circle();
    Shape *s2 = new Line();
    Shape *s3 = new Square();

    std::vector<Shape *> shapes {s1, s2, s3};
    // for(const auto p : shapes) {
    //     p -> draw();
    // }

    screen_refresh(shapes);

    delete s1;
    delete s2;
    delete s3;
    
    cout << endl;
    return 0;
}

