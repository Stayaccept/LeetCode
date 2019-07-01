class Solution {
public:
    bool reachingPoints(int sx, int sy, int tx, int ty) {
        if((sx==tx&&sy>ty)||(sx>tx&&sy==ty))
        return 0;
        while(tx>sx&&ty>sy){
            if(tx==ty)
            break;
            if(tx>ty)
            tx%=ty;
            else
            ty%=tx;
        }
        if(tx==sx)
        return (ty-sy)%tx==0;
        if(ty==sy)
        return (tx-sx)%ty==0;
        return 0;
    }
};
