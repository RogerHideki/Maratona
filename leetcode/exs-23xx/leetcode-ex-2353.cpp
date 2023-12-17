class FoodRatings {
public:
    unordered_map<string, pair<int, string>> foodRatingCuisine;
    unordered_map<string, map<int, set<string>>> cuisineRatingFood;

    FoodRatings(vector<string> & foods, vector<string> & cuisines, vector<int> & ratings)
    {
        int n = foods.size();
        for (int i = 0; i < n; i++) {
            foodRatingCuisine[foods[i]] = {ratings[i], cuisines[i]};
            cuisineRatingFood[cuisines[i]][ratings[i]].insert(foods[i]);
        }
    }

    void changeRating(string food, int newRating) {
        auto [oldRating, cuisine] = foodRatingCuisine[food];
        foodRatingCuisine[food] = {newRating, cuisine};
        cuisineRatingFood[cuisine][newRating].insert(food);
        if (cuisineRatingFood[cuisine][oldRating].size() == 1) cuisineRatingFood[cuisine].erase(oldRating);
        else cuisineRatingFood[cuisine][oldRating].erase(food);
    }

    string highestRated(string cuisine) {
        return *(cuisineRatingFood[cuisine].rbegin()->second.begin());
    }
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */