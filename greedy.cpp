/*
Задача. Монетная система некоторого государства состоит из монет достоинством a_1 = 1 < a_2 < a_3 < ... < a_n,
        причём каждый следующий номинал делится на предыдущий. Требуется выдать сумму S наименьшим возможным 
        количеством монет.
*/

vector<int> v = {1, 5, 10, 50, 100};

vector<int> solution(int s, vector<int> v){
    vector<int> coins;
    reverse(v.begin(), v.end());
    for(auto el : v){
        for(int i = 0; i < s / el; i++) coins.push_back(el);
        s %= el;
    }
    return coins;
}
