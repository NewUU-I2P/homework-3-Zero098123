void problemSolution1(float consumed_water) {
    float cost;
    float total_cost=13;
    if(consumed_water>=30){
        if(consumed_water>=50) {
            if(consumed_water>=60){
                total_cost=total_cost+30*0.4+20*0.12+10*1.4 + (total_cost-60)*1.5;
            } else{
                total_cost=total_cost+30*0.4+20*0.12+(consumed_water-50)*1.4;
            }
        }else{
            total_cost=total_cost+30*0.4+(consumed_water-30)*0.12;
        }
    } else{
        total_cost=total_cost+consumed_water*0.4;
    }

    cost=total_cost;
    return cost;
}
