#include <iostream>
#include <algorithm>
#include <vector>


int main() {
    std::vector<std::pair<int, int>> witches(3);
    std::vector<std::pair<int, int>> witches_predict(3);

    for (int i = 0; i < 3; i++)
    {
        witches[i].second = i;
    }
    std::cin >> witches[0].first >> witches[1].first >> witches[2].first;
    std::sort(witches.begin(), witches.end());
    witches_predict[witches[0].second].first = witches[1].first - witches[0].first;
    witches_predict[witches[0].second].second = ((witches[2].first != witches[1].first) ? 1 : 0);

    witches_predict[witches[1].second].first = 0;
    witches_predict[witches[1].second].second = ((witches[0].first != witches[1].first) ? 1 : 0) +
                                                ((witches[2].first != witches[1].first) ? 1 : 0);

    witches_predict[witches[2].second].first = witches[2].first - witches[1].first;
    witches_predict[witches[2].second].second = ((witches[0].first != witches[1].first) ? 1 : 0);
    for (int i = 0; i < 3; i++)
    {
        std::cout << witches_predict[i].first << " "
            << witches_predict[i].second << std::endl;
    }
    return 0;
}
