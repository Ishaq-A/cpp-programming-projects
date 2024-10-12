#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> // for std::iota

// for_each - Non-modifying sequence operation
// Displays each element of nums.
void test1() {
    std::cout << "\n===================Test 1=======================" << std::endl;

    std::vector<int> nums {10,20,30,40,50};

    std::for_each(nums.begin(), nums.end(), [] (int num) {
        std::cout << num << " ";
    });

    std::cout << std::endl;
}

// is_permutation - Non-modifying sequence operation
// Test whether two traingles are equivalent.
// Triangles are defined by a vector of three points in any order.
// Regardless of the order of points, if two trinagles contain
// the same three points then they are equivalent.
// This is determined by testing whether one sequence of points
// is a permutation of another using a predictae lambda to compare points
void test2() {
    std::cout << "\n===================Test 2=======================" << std::endl;

    struct Point {
        int x;
        int y;
    };

    Point pt1 {1,2};
    Point pt2 {4,3};
    Point pt3 {3,5};
    Point pt4 {3,1};

    std::vector<Point> triangle1 {pt1, pt2, pt3};
    std::vector<Point> triangle2 {pt2, pt3, pt1};
    std::vector<Point> triangle3 {pt1, pt2, pt4};

    // Test whether triangle1 and triangle2 are equivalent
    if(std::is_permutation(triangle1.begin(), triangle1.end(), triangle2.begin(), [] (Point lhs, Point rhs) {
        return lhs.x == rhs.x && lhs.y == rhs.y;
    })) {
        std::cout << "Triangle 1 and Triangle 2 are equivalent!" << std::endl;
    } else {
        std::cout << "Triangle 1 and Triangle 2 are not equivalent!" << std::endl;
    }

    // Test whether triangle1 and triangle3 are equivalent
    if(std::is_permutation(triangle1.begin(), triangle1.end(), triangle3.begin(), [] (Point lhs, Point rhs) {
        return lhs.x == rhs.x && lhs.y == rhs.y;
    })) {
        std::cout << "Triangle 1 and Triangle 2 are equivalent!" << std::endl;
    } else {
        std::cout << "Triangle 1 and Triangle 2 are not equivalent!" << std::endl;
    }
}

// transform - Modifying sequence operation
// Similar to the lambda "bonus" which awarded bounus points to 
// test scores, transform function applies whetever operation is 
// defined within the passed lambda to each element of the sequence.
// In this case, each test score is increased by 5 points.
void test3() {
    std::cout << "\n===================Test 3=======================" << std::endl;

    std::vector<int> test_scores {93,88,75,68,65};
    int bonus_points {5};

    std::transform(test_scores.begin(), test_scores.end(), test_scores.begin(), [bonus_points] (int score) {
        return score += bonus_points;
    });

    // Display updated test scores
    for(int score : test_scores) {
        std::cout << score << " ";
    }

    std::cout << std::endl;
}

int main() {
    // test1();
    // test2();
    test3();

    std::cout << std::endl;
    return 0;
}

