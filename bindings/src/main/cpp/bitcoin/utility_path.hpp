#ifndef LIBBITCOIN__UTILITY_PATH_HPP
#define LIBBITCOIN__UTILITY_PATH_HPP

#include "boost/filesystem/path.hpp"

namespace libbitcoin {
namespace api {

class utility_path {
public:
	boost::filesystem::path* getValue() {
        return value_;
    }

    void setValue(boost::filesystem::path* value) {
        value_ = value;
    }
private:
    boost::filesystem::path* value_;
};

} // api
} // libbitcoin

#endif