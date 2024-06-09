class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int Size = hand.size();
        if ((Size % groupSize))
            return false;
        map<int, int> myMap;
        for (auto& it : hand) {
            myMap[it]++;
        }

        while (!myMap.empty()) {
            auto starter = myMap.begin()->first;
            ;
            if (starter < 0)
                return false;
            for (int k = 0; k < groupSize; k++) {
                if (myMap.find(starter + k)->second) {
                    myMap[starter + k]--;
                    if (myMap[starter + k] == 0) {
                        myMap.erase(starter + k);
                    }
                }

                else
                    return false;
            }
        }

        return true;
    }
};