#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

int main() {
    // タイマー開始
    std::clock_t start_time = std::clock();

    // words配列の初期化
    std::string words_array[] = {
        "zebrawood family", "zebrawood tree", "zep", "Zephaniah", "zero coupon security",
        "Zellig Sabbatai Harris", "Zellig Harris", "Zeitgeist", "Zen", "zeroth", "Zeno",
        "zesty", "Zigadenus nuttalli", "Zhou En-lai", "a", "admit", "agree", "AID",
        "all", "art", "at", "attend", "August", "average", "avoid", "away", "almost",
        "along", "amount", "America", "announce", "answer", "another", "anyone", "apply",
        "around", "arrive", "humor", "husband", "hundredth", "however", "housing",
        "hour", "hot", "honest", "hope", "holiday", "hold", "highly", "Here", "heat",
        "hat", "He", "hardly", "happen", "hair"
    };
    std::vector<std::string> words(words_array, words_array + sizeof(words_array) / sizeof(words_array[0]));

    std::cout << "Words count: " << words.size() << std::endl;

    std::vector<int> use_words;
    std::vector<double> use_persent(words.size(), 0.0);
    std::vector<int> used_wordsAll(words.size(), 0);
    std::vector<int> top_number;

    int repert = 99999999;
    int cheack = 9999;

    // 0.000000286878759 1つの処理にかかる時間
    double cheackTime = (repert* 0.00000000588019)* cheack ;

    int cheackTimeInt = static_cast<int>(cheackTime);
    int hours = cheackTimeInt / 3600;
    int minutes = (cheackTimeInt / 60) % 60;
    std::cout << hours << "時間" << minutes << "分" << std::endl;
    std::cout << cheackTimeInt << "秒" << std::endl;

    for (int test = 0; test < cheack; ++test) {
        top_number.clear();
        use_words.assign(words.size(), 0);
        use_persent.assign(words.size(), 0.0);

        for (int i = 0; i < repert; ++i) {
            int a = rand() % words.size();
            use_words[a] += 1;
            used_wordsAll[a] += 1;
        }

        for (int p = 0; p < use_words.size(); ++p) {
            use_persent[p] = static_cast<double>(use_words[p]) / repert;
            if (use_persent[p] > 0.08) {
                top_number.push_back(p);
            }
        }
    }

    for (int c = 0; c < used_wordsAll.size(); ++c) {
        use_persent[c] = static_cast<double>(used_wordsAll[c]) / (repert * cheack);
    }

    std::cout << "Use Percentage: ";
    for (int i = 0; i < use_persent.size(); ++i) {
        std::cout << use_persent[i] << " ";
    }
    std::cout << std::endl;

    std::string test_bun = "";
    for (int t = 0; t < 5; ++t) {
        test_bun += words[rand() % words.size()] + " ";
    }

    std::cout << "Random text: " << test_bun << "." << std::endl;

    std::clock_t end_time = std::clock();
    std::cout << "実行時間: " << static_cast<double>(end_time - start_time) / CLOCKS_PER_SEC << "秒" << std::endl;

    return 0;
}
