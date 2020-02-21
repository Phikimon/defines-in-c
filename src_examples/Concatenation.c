int compare_chicks(const void *chick1, const void *chick2)
{
    #define boobs(i)   (*((const int **)chick##i)) [0]
    #define waist(i)   (*((const int **)chick##i)) [1]
    #define hippies(i) (*((const int **)chick##i)) [2]
    #define sum(i)     (boobs(i) + waist(i) + hippies(i))

    int sum1 = sum(1);
    int sum2 = sum(2);

    int firstChickIsBest = (sum1 < sum2);

    if (sum1 == sum2)
    {
        firstChickIsBest = boobs(1) > boobs(2);
        if (boobs(1) == boobs(2))
        {
            firstChickIsBest = waist(1) < waist(2);
            if (waist(1) == waist(2))
            {
                firstChickIsBest = hippies(1) > hippies(2);
            }
        }
    }

    return !firstChickIsBest;

    #undef sum
    #undef boobs
    #undef waist
    #undef hippies
}
