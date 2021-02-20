#ifndef MOVIE_H
#define MOVIE_H
#include "product.h"
class Movie : public Product{
public:
    Movie(const std::string category, const std::string name, double price, int qty,
    const std::string genre, const std::string rating);

    ~Movie();

    /**
     * Returns tags this product should be associated with
     * */
    std::set<std::string> keywords() const;

    /**
     * Returns a string that describes this product
     * */
    std::string displayString() const;

    /**
     * outputs the databse format of the product info
     * */
    virtual void dump(std::ostream& os) const;

protected:
    std::string genre_;
    std::string rating_;
};
#endif