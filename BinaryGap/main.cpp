int solution(int N) {
    size_t max = 0;
    size_t gap = 0;
    
    bool start = false;
    
    for (size_t i = 0; i < sizeof N * 8; ++i)
    {
        int current = (N >> i) & 0x01;
        
        switch (current)
        {
            case 0x00:
            {
                if (start)
                {
                    gap++;
                }
                
                break;
            }
            case 0x01:
            {
                start = true;
    
                if (max < gap)
                {
                    max = gap;
                }
                
                gap = 0;
                
                break;
            }
            default:
            break;
        }
    }
    
    return max;
}