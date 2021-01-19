class ParkingSystem {
private:
    int B, M, S;
    enum CarType {
        Big = 1,
        Medium = 2,
        Small = 3
    };
public:
    ParkingSystem(int big, int medium, int small) {
        B = big;
        M = medium;
        S = small;
    }
    
    bool addCar(int carType) {
        if(carType == Big)
            return B-- >= 1;
        else if(carType == Medium)
            return M-- >= 1;
        else
            return S-- >= 1;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */