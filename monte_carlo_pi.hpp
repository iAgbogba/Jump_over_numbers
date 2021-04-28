double approximationPi(vector<Point>& vec)
{
    int nbre = 0;
    for(const& p: vec)
    {
        if( (pow(p.x,2) + pow(p.y,2)) <= 1)
        {
            nbre++;
        }
    }
    return 4.0*nbre/vec.size();
}
