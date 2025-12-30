#include <iostream>
#include "../الجوهر/الحكم/محرك_الحكم.hpp"
#include "../الجوهر/النية/نية.hpp"

int main() {
    نية ن{"منصة تعليمية", {}};
    محرك_الحكم ح;

    if (ح.تقييم(ن) == قرار::ممنوع) {
        std::cout << "❌ مرفوض" << std::endl;
        return ١;
    }

    std::cout << "✅ مباح" << std::endl;
    return ٠;
}
