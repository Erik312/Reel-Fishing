/*
    REEL FISHING
    A text based fishing game

    written by Erik Ramos


*/

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <chrono>
#include <thread>

#include "base_models/fisherman.hpp"
#include "base_models/fish.hpp"
#include "./base_models/fishing_spot.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::rand;
using std::srand;

void populate_locations(vector<FishingSpot> &v1){
    FishingSpot loc1{"Big Bear Lake","Big Bear Lake sits 100 miles northeast of Los Angeles in the San Bernardino National Forest. Altitudes range from 6,750 to 9,000 feet and the valley enjoys 300+ days of sunshine each year. Big Bear Lake is a manmade, fresh-water lake 7 miles long and a 1/2 mile wide. Maximum depth reaches 72 feet.",22};
    FishingSpot loc2{"Lake Texoma","Come visit Lake Texoma, a nature filled cakewalk of water playgrounds and tons of activities in the southwest US.It covers 74,686-acres with 550 miles of shoreline.",580};
    FishingSpot loc3{"Clear Lake","Clear Lake State Park is on the shores of California’s largest freshwater lake. The area is popular for all kinds of water recreation, including swimming, fishing, boating and water-skiing.Anglers can catch largemouth bass, crappie, bluegill and channel catfish.",100};
    v1.push_back(loc1);
    v1.push_back(loc2);
    v1.push_back(loc3);
    return;

};

int main(){
    cout << endl;
    cout << "R E E L __________ F I S H I N G" << endl;
    cout << "________________________________" << endl;
    bool game_over=false;
    string temp_name;
    cout << endl;
    cout << "Enter Fisherman Name: ";
    cin >> temp_name;
    cout << endl;
    
    Fisherman player1;
    player1.name = temp_name;
    vector<FishingSpot> fish_dest;
    populate_locations(fish_dest);

    //FishingSpot loc1{"Big Bear Lake","Big Bear Lake sits 100 miles northeast of Los Angeles in the San Bernardino National Forest. Altitudes range from 6,750 to 9,000 feet and the valley enjoys 300+ days of sunshine each year. Big Bear Lake is a manmade, fresh-water lake 7 miles long and a 1/2 mile wide. Maximum depth reaches 72 feet.",22};
    //FishingSpot loc2{"Lake Texoma","Come visit Lake Texoma, a nature filled cakewalk of water playgrounds and tons of activities in the southwest US.It covers 74,686-acres with 550 miles of shoreline.",580};
    //FishingSpot loc3{"Clear Lake","Clear Lake State Park is on the shores of California’s largest freshwater lake. The area is popular for all kinds of water recreation, including swimming, fishing, boating and water-skiing.Anglers can catch largemouth bass, crappie, bluegill and channel catfish.",100};
    //fish_dest.push_back(loc1);
    //fish_dest.push_back(loc2);
    //fish_dest.push_back(loc3);
    cout << "Select a lake to fish:" << endl;
    cout << "[0] Big Bear Lake" << endl;
    cout << "[1] Lake Texoma" << endl;
    cout << "[2] Clear Lake" << endl;
    cout << endl;
    cout << "Selected: ";
    int selected_location_id;
    cin >> selected_location_id;
    cout << endl;
    while(cin.fail()){
        cout << endl;
        cout << "* Bad Entry. Select a valid option. *" << endl;
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << endl;
        cout << "Select a lake to fish:" << endl;
        cout << "[0] Big Bear Lake" << endl;
        cout << "[1] Lake Texoma" << endl;
        cout << "[2] Clear lake" << endl;
        cout << endl;
        cout << "Selected: ";
        cin >> selected_location_id;
        };
    while(selected_location_id > fish_dest.size() - 1){
        cout << "***Invalid number selected***" << endl;
        cout << endl;
        cout << "Select a fishing lake:" << endl;
        cout << "[0] Big Bear Lake" << endl;
        cout << "[1] Lake Texoma" << endl;
        cout << "[2] Clear Lake" << endl;
        cout << endl;
        cout << "Selected: ";
        cin >> selected_location_id;
        cout << endl;
    };

    cout << "Great! We are all set up and ready to fish " << player1.name << "!" << endl;
    cout << endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    cout << "loading map....." << endl;
    cout << endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(2000));
    cout << endl;
    cout << "------------ Lets Go Fishing ----------------" << endl;
    cout << endl;

    cout << "Location: " << fish_dest[selected_location_id].location_name << endl;
    cout << "Weather Conditions: " << fish_dest[selected_location_id].current_forecast << endl;
    cout << "Shoreline: " << fish_dest[selected_location_id].shoreline <<" miles"<< endl;
    cout << endl;
    cout << fish_dest[selected_location_id].description << endl;
    while(!game_over){
        int player_option=0;
        int fish_rng = 0;
        cout << endl;
        cout << "M E N U" << endl;
        cout << "[1] Cast" << endl;
        cout << "[2] Total" << endl;
        cout << "[3] Quit fishing" << endl;
        cout << endl;
        cout << "Select an action: ";
        cout << endl;
        cin >> player_option;
        while(cin.fail()){
            cout << endl;
            cout << "* Bad Entry. Select a valid option. *" << endl;
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << endl;
            cout << "M E N U" << endl;
            cout << "[1] Cast" << endl;
            cout << "[2] Total" << endl;
            cout << "[3] Quit fishing" << endl;
            cout << endl;
            cout << "Select an action: ";
            cin >> player_option;
            }
        cout << "************************************" << endl; 
        if(player_option == 1){
            cout << "Good Cast!" << endl;
            cout << "..." << endl;
            std::this_thread::sleep_for(std::chrono::milliseconds(750));
            cout << "....." << endl;
            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
            cout << "........" << endl;
            std::this_thread::sleep_for(std::chrono::milliseconds(1250));
            fish_rng = rand()%1000 + 1;
            if(fish_rng % 2 == 0){
                cout << endl;
                cout << "Nothing not even a nibble." << endl;
                cout << "***********************************" << endl;
            }else{
                Fish fresh_fish;
                player1.catch_bag.push_back(fresh_fish);
                cout << endl;
                cout << "Fish on! You caught one!!!" << endl;
                cout << "Catch Summary: " << endl;
                cout << "Type: " << fresh_fish.fish_species << endl;
                cout << "Weight: " << fresh_fish.fish_weight << " lbs" << endl;
                cout << "*************************************************" << endl;

            };
        }else if(player_option == 2){
            int count = 1;
            cout << "Total Catch for the day: " << endl;
            cout << endl;
            for(auto item : player1.catch_bag){

                cout << count << "." << " "<< "{ Type:" <<item.fish_species << ", Weight:" << item.fish_weight << " lbs}" << endl;
                
                count++;
                
            }
            cout << endl;
            cout << "*************************************************" << endl;

        }else if(player_option == 3){
            cout << endl;
            cout << "Exiting game..." << endl;
            cout << endl;
            game_over = true;
            return 1;

        }else{
            cout << "Invalid option selected" << endl;
            continue;
        };

    };
    

    return 0;
}