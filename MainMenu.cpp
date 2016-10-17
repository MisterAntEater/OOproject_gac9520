    switch ( part_type ){
        case head:
        case torso:
        case battery:
        case arm:
        case locomotor:
            if(Model::checkForSpot(Locomotor)==0){ break; }
            p_temp = Part(Locomotor);

            cout << "Enter the part number: ";
            cin >> i_temp;
            p_temp.setPartNumber(i_temp);

            cout << "Enter the speed of the locomotor: ";
            cin >> i_temp;
            p_temp.setSpeed(i_temp);
            
        default:
            cout << "That part type is invalid!\n";
            break;
    }

