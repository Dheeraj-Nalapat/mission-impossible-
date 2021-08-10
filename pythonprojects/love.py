print(
    "\n".join(
        [
            "".join(
                [
                    (
                        "dramaLOVE"[(x-y)%8]
                        if((x*0.05)**2+(y*0.1)**2-1)**3 -(x*0.05)** 2 *(y*0.1)**3 <= 0
                        else " "
                    )
                    for x in range(-40,40)
                ]
            )
            for y in range(15,-12,-1)        
        ]
    )
)

#starting github copilot