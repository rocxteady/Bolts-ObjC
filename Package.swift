// swift-tools-version:5.5

import PackageDescription

let package = Package(
    name: "Bolts",
    defaultLocalization: "en",
    platforms: [.iOS(.v9),
                .macOS(.v10_10),
                .tvOS(.v10),
                .watchOS(.v2)],
    products: [
        .library(name: "Bolts", targets: ["Tasks"]),
        .library(name: "BoltsAppLinks", targets: ["AppLinks"])
    ],
    targets: [
        .target(
            name: "Tasks",
            dependencies: [],
            path: "Bolts/Common",
            publicHeadersPath: ""),
        .target(name: "AppLinks",
                dependencies: ["Tasks"],
                path: "Bolts/iOS",
                publicHeadersPath: "",
                cSettings: [.headerSearchPath("Internal")])
    ]
)
