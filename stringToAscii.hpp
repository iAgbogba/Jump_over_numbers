char scanChar(string str)
{
    string cp = str;
    int c = 0;
    try
    {
        c = stoi(cp);
    }
    catch (exception e)
    {
        return '?';
    }
    
    if(c >= 65 and c <= 90)
    {
        return (char) c;
    }
    return '?';
}
