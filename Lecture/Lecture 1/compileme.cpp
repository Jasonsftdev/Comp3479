#include <random>
#include <ctime>
#include <iostream>
#include <vector>


template <typename T>
auto generate_number(bool return_type, int lower, int upper)
{
    if (return_type)
    {
        std::random_device rd;
        std::mt19937 generator(rd());
        std::uniform_int_distribution<> distribution(lower, upper);
        T my_int = distribution(generator);
        return my_int;
    }
    else
    {
        std::random_device rd;
        std::default_random_engine generator(rd());
        std::uniform_real_distribution<double> distribution(lower, upper);
        T my_double = distribution(generator);
        return my_double;
    }
}

template <typename InputIterator>
auto sum_of_diffs(InputIterator first, InputIterator last)
{
    auto sum = abs(*first++ - *first);
    while (first != last - 1)
    {
        sum += abs(*first++ - *first);
    }
    return sum;
}

int main()
{
    std::vector<int> int_vector;
    for (int i = 0; i < 5; ++i)
    {
        int_vector.push_back(generate_number<int>(true, 0, 100));
    }

    std::vector<double> dbl_vector;
    for (int i = 0; i < 5; ++i)
    {
        dbl_vector.push_back(generate_number<double>(false, 0, 100));
    }

    for (int i = 0; i < 5; ++i)
    {
        std::cout << int_vector[i] << " ";
    }

    std::cout << std::endl << "Sum of sequential differences: "
        << sum_of_diffs(int_vector.begin(), int_vector.end()) << std::endl << std::endl;

    for (int i = 0; i < 5; ++i)
    {
        std::cout << dbl_vector[i] << " ";
    }

    std::cout << std::endl << "Sum of sequential differences: "
        << sum_of_diffs(dbl_vector.begin(), dbl_vector.end()) << std::endl << std::endl;

    // system("pause"); WINDOWS ONLY
    return 0;
}