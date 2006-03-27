/* -*- C++ -*- ------------------------------------------------------------
 @@COPYRIGHT@@
 *-----------------------------------------------------------------------*/
/** @file
 *  @brief
 */

std::ostream&
operator<<(std::ostream& os, const vector_d4& v)
{
    os << "[";
    for(size_t i = 0; i < 4; ++i) {
        os << " " << v[i];
    }
    os << " ]";
    return os;
}

// -------------------------------------------------------------------------
// vim:ft=cpp
