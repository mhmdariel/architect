#pragma once
#include "../النية/نية.hpp"

enum class قرار { مباح, ممنوع };

class محرك_الحكم {
public:
    قرار تقييم(const نية& ن) const;
};
