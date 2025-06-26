 {
        "changed": false,
        "msg": "All items completed",
        "results": [
            {
                "ansible_loop_var": "item",
                "changed": false,
                "changes": [],
                "failed": false,
                "instance_ids": [
                    "i-0ef4fcfef67a86380"
                ],
                "instances": [
                    {
                        "ami_launch_index": 0,
                        "architecture": "x86_64",
                        "block_device_mappings": [
                            {
                                "device_name": "/dev/sda1",
                                "ebs": {
                                    "attach_time": "2025-06-26T06:14:50+00:00",
                                    "delete_on_termination": true,
                                    "status": "attached",
                                    "volume_id": "vol-0e07a5212cf392364"
                                }
                            }
                        ],
                        "boot_mode": "uefi-preferred",
                        "capacity_reservation_specification": {
                            "capacity_reservation_preference": "open"
                        },
                        "client_token": "e4701b97f42b48a5914a6d1cb6715dbc",
                        "cpu_options": {
                            "core_count": 1,
                            "threads_per_core": 2
                        },
                        "current_instance_boot_mode": "uefi",
                        "ebs_optimized": false,
                        "ena_support": true,
                        "enclave_options": {
                            "enabled": false
                        },
                        "hibernation_options": {
                            "configured": false
                        },
                        "hypervisor": "xen",
                        "image_id": "ami-09c813fb71547fc4f",
                        "instance_id": "i-0ef4fcfef67a86380",
                        "instance_type": "t3.micro",
                        "launch_time": "2025-06-26T06:14:50+00:00",
                        "maintenance_options": {
                            "auto_recovery": "default",
                            "reboot_migration": "default"
                        },
                        "metadata_options": {
                            "http_endpoint": "enabled",
                            "http_protocol_ipv6": "disabled",
                            "http_put_response_hop_limit": 1,
                            "http_tokens": "optional",
                            "instance_metadata_tags": "disabled",
                            "state": "applied"
                        },
                        "monitoring": {
                            "state": "disabled"
                        },
                        "network_interfaces": [
                            {
                                "association": {
                                    "ip_owner_id": "amazon",
                                    "public_dns_name": "ec2-52-71-113-121.compute-1.amazonaws.com",
                                    "public_ip": "52.71.113.121"
                                },
                                "attachment": {
                                    "attach_time": "2025-06-26T06:14:50+00:00",
                                    "attachment_id": "eni-attach-078a86ce43907db5c",
                                    "delete_on_termination": true,
                                    "device_index": 0,
                                    "network_card_index": 0,
                                    "status": "attached"
                                },
                                "description": "",
                                "groups": [
                                    {
                                        "group_id": "sg-0a45058bd6da2342c",
                                        "group_name": "allow all-2"
                                    }
                                ],
                                "interface_type": "interface",
                                "ipv6_addresses": [],
                                "mac_address": "12:02:b2:7c:54:ef",
                                "network_interface_id": "eni-0f2bd7d7bf94b7495",
                                "operator": {
                                    "managed": false
                                },
                                "owner_id": "038462766426",
                                "private_dns_name": "ip-172-31-91-230.ec2.internal",
                                "private_ip_address": "172.31.91.230",
                                "private_ip_addresses": [
                                    {
                                        "association": {
                                            "ip_owner_id": "amazon",
                                            "public_dns_name": "ec2-52-71-113-121.compute-1.amazonaws.com",
                                            "public_ip": "52.71.113.121"
                                        },
                                        "primary": true,
                                        "private_dns_name": "ip-172-31-91-230.ec2.internal",
                                        "private_ip_address": "172.31.91.230"
                                    }
                                ],
                                "source_dest_check": true,
                                "status": "in-use",
                                "subnet_id": "subnet-0e2183fb4245ac220",
                                "vpc_id": "vpc-0a922ea130a5a47ec"
                            }
                        ],
                        "network_performance_options": {
                            "bandwidth_weighting": "default"
                        },
                        "operator": {
                            "managed": false
                        },
                        "placement": {
                            "availability_zone": "us-east-1a",
                            "group_name": "",
                            "tenancy": "default"
                        },
                        "platform_details": "Red Hat Enterprise Linux",
                        "private_dns_name": "ip-172-31-91-230.ec2.internal",
                        "private_dns_name_options": {
                            "enable_resource_name_dns_a_record": false,
                            "enable_resource_name_dns_aaaa_record": false,
                            "hostname_type": "ip-name"
                        },
                        "private_ip_address": "172.31.91.230",
                        "product_codes": [],
                        "public_dns_name": "ec2-52-71-113-121.compute-1.amazonaws.com",
                        "public_ip_address": "52.71.113.121",
                        "root_device_name": "/dev/sda1",
                        "root_device_type": "ebs",
                        "security_groups": [
                            {
                                "group_id": "sg-0a45058bd6da2342c",
                                "group_name": "allow all-2"
                            }
                        ],
                        "source_dest_check": true,
                        "state": {
                            "code": 16,
                            "name": "running"
                        },
                        "state_transition_reason": "",
                        "subnet_id": "subnet-0e2183fb4245ac220",
                        "tags": {
                            "Name": "mysql"
                        },
                        "usage_operation": "RunInstances:0010",
                        "usage_operation_update_time": "2025-06-26T06:14:50+00:00",
                        "virtualization_type": "hvm",
                        "vpc_id": "vpc-0a922ea130a5a47ec"
                    }
                ],
                "invocation": {
                    "module_args": {
                        "aap_callback": null,
                        "access_key": null,
                        "availability_zone": null,
                        "aws_ca_bundle": "/etc/pki/tls/certs/ca-bundle.crt",
                        "aws_config": null,
                        "count": null,
                        "cpu_credit_specification": null,
                        "cpu_options": null,
                        "debug_botocore_endpoint_logs": false,
                        "detailed_monitoring": null,
                        "ebs_optimized": null,
                        "endpoint_url": null,
                        "exact_count": null,
                        "filters": {
                            "image-id": [
                                "ami-09c813fb71547fc4f"
                            ],
                            "instance-state-name": [
                                "pending",
                                "running",
                                "stopping",
                                "stopped"
                            ],
                            "subnet-id": [
                                "subnet-0e2183fb4245ac220"
                            ],
                            "tag:Name": [
                                "mysql"
                            ]
                        },
                        "hibernation_options": false,
                        "iam_instance_profile": null,
                        "image": null,
                        "image_id": "ami-09c813fb71547fc4f",
                        "instance_ids": [],
                        "instance_initiated_shutdown_behavior": null,
                        "instance_type": "t3.micro",
                        "key_name": null,
                        "launch_template": null,
                        "metadata_options": null,
                        "name": "mysql",
                        "network": null,
                        "placement_group": null,
                        "profile": null,
                        "purge_tags": true,
                        "region": "us-east-1",
                        "secret_key": null,
                        "security_group": "sg-0a45058bd6da2342c",
                        "security_groups": [],
                        "session_token": null,
                        "state": "present",
                        "subnet_id": "subnet-0e2183fb4245ac220",
                        "tags": null,
                        "tenancy": null,
                        "termination_protection": null,
                        "user_data": null,
                        "validate_certs": true,
                        "volumes": null,
                        "vpc_subnet_id": "subnet-0e2183fb4245ac220",
                        "wait": true,
                        "wait_timeout": 600
                    }
                },
                "item": "mysql"
            },
            {
                "ansible_loop_var": "item",
                "changed": false,
                "changes": [],
                "failed": false,
                "instance_ids": [
                    "i-0d238805e28d7501e"
                ],
                "instances": [
                    {
                        "ami_launch_index": 0,
                        "architecture": "x86_64",
                        "block_device_mappings": [
                            {
                                "device_name": "/dev/sda1",
                                "ebs": {
                                    "attach_time": "2025-06-26T06:15:09+00:00",
                                    "delete_on_termination": true,
                                    "status": "attached",
                                    "volume_id": "vol-0022d0f080457d669"
                                }
                            }
                        ],
                        "boot_mode": "uefi-preferred",
                        "capacity_reservation_specification": {
                            "capacity_reservation_preference": "open"
                        },
                        "client_token": "dad0e9ea9b5a4f14ae50f06c1c1d9178",
                        "cpu_options": {
                            "core_count": 1,
                            "threads_per_core": 2
                        },
                        "current_instance_boot_mode": "uefi",
                        "ebs_optimized": false,
                        "ena_support": true,
                        "enclave_options": {
                            "enabled": false
                        },
                        "hibernation_options": {
                            "configured": false
                        },
                        "hypervisor": "xen",
                        "image_id": "ami-09c813fb71547fc4f",
                        "instance_id": "i-0d238805e28d7501e",
                        "instance_type": "t3.micro",
                        "launch_time": "2025-06-26T06:15:08+00:00",
                        "maintenance_options": {
                            "auto_recovery": "default",
                            "reboot_migration": "default"
                        },
                        "metadata_options": {
                            "http_endpoint": "enabled",
                            "http_protocol_ipv6": "disabled",
                            "http_put_response_hop_limit": 1,
                            "http_tokens": "optional",
                            "instance_metadata_tags": "disabled",
                            "state": "applied"
                        },
                        "monitoring": {
                            "state": "disabled"
                        },
                        "network_interfaces": [
                            {
                                "association": {
                                    "ip_owner_id": "amazon",
                                    "public_dns_name": "ec2-3-86-234-50.compute-1.amazonaws.com",
                                    "public_ip": "3.86.234.50"
                                },
                                "attachment": {
                                    "attach_time": "2025-06-26T06:15:08+00:00",
                                    "attachment_id": "eni-attach-0a7381ee337481510",
                                    "delete_on_termination": true,
                                    "device_index": 0,
                                    "network_card_index": 0,
                                    "status": "attached"
                                },
                                "description": "",
                                "groups": [
                                    {
                                        "group_id": "sg-0a45058bd6da2342c",
                                        "group_name": "allow all-2"
                                    }
                                ],
                                "interface_type": "interface",
                                "ipv6_addresses": [],
                                "mac_address": "12:52:f2:36:c3:3f",
                                "network_interface_id": "eni-05cac0c36884a887f",
                                "operator": {
                                    "managed": false
                                },
                                "owner_id": "038462766426",
                                "private_dns_name": "ip-172-31-81-45.ec2.internal",
                                "private_ip_address": "172.31.81.45",
                                "private_ip_addresses": [
                                    {
                                        "association": {
                                            "ip_owner_id": "amazon",
                                            "public_dns_name": "ec2-3-86-234-50.compute-1.amazonaws.com",
                                            "public_ip": "3.86.234.50"
                                        },
                                        "primary": true,
                                        "private_dns_name": "ip-172-31-81-45.ec2.internal",
                                        "private_ip_address": "172.31.81.45"
                                    }
                                ],
                                "source_dest_check": true,
                                "status": "in-use",
                                "subnet_id": "subnet-0e2183fb4245ac220",
                                "vpc_id": "vpc-0a922ea130a5a47ec"
                            }
                        ],
                        "network_performance_options": {
                            "bandwidth_weighting": "default"
                        },
                        "operator": {
                            "managed": false
                        },
                        "placement": {
                            "availability_zone": "us-east-1a",
                            "group_name": "",
                            "tenancy": "default"
                        },
                        "platform_details": "Red Hat Enterprise Linux",
                        "private_dns_name": "ip-172-31-81-45.ec2.internal",
                        "private_dns_name_options": {
                            "enable_resource_name_dns_a_record": false,
                            "enable_resource_name_dns_aaaa_record": false,
                            "hostname_type": "ip-name"
                        },
                        "private_ip_address": "172.31.81.45",
                        "product_codes": [],
                        "public_dns_name": "ec2-3-86-234-50.compute-1.amazonaws.com",
                        "public_ip_address": "3.86.234.50",
                        "root_device_name": "/dev/sda1",
                        "root_device_type": "ebs",
                        "security_groups": [
                            {
                                "group_id": "sg-0a45058bd6da2342c",
                                "group_name": "allow all-2"
                            }
                        ],
                        "source_dest_check": true,
                        "state": {
                            "code": 16,
                            "name": "running"
                        },
                        "state_transition_reason": "",
                        "subnet_id": "subnet-0e2183fb4245ac220",
                        "tags": {
                            "Name": "backend"
                        },
                        "usage_operation": "RunInstances:0010",
                        "usage_operation_update_time": "2025-06-26T06:15:08+00:00",
                        "virtualization_type": "hvm",
                        "vpc_id": "vpc-0a922ea130a5a47ec"
                    }
                ],
                "invocation": {
                    "module_args": {
                        "aap_callback": null,
                        "access_key": null,
                        "availability_zone": null,
                        "aws_ca_bundle": "/etc/pki/tls/certs/ca-bundle.crt",
                        "aws_config": null,
                        "count": null,
                        "cpu_credit_specification": null,
                        "cpu_options": null,
                        "debug_botocore_endpoint_logs": false,
                        "detailed_monitoring": null,
                        "ebs_optimized": null,
                        "endpoint_url": null,
                        "exact_count": null,
                        "filters": {
                            "image-id": [
                                "ami-09c813fb71547fc4f"
                            ],
                            "instance-state-name": [
                                "pending",
                                "running",
                                "stopping",
                                "stopped"
                            ],
                            "subnet-id": [
                                "subnet-0e2183fb4245ac220"
                            ],
                            "tag:Name": [
                                "backend"
                            ]
                        },
                        "hibernation_options": false,
                        "iam_instance_profile": null,
                        "image": null,
                        "image_id": "ami-09c813fb71547fc4f",
                        "instance_ids": [],
                        "instance_initiated_shutdown_behavior": null,
                        "instance_type": "t3.micro",
                        "key_name": null,
                        "launch_template": null,
                        "metadata_options": null,
                        "name": "backend",
                        "network": null,
                        "placement_group": null,
                        "profile": null,
                        "purge_tags": true,
                        "region": "us-east-1",
                        "secret_key": null,
                        "security_group": "sg-0a45058bd6da2342c",
                        "security_groups": [],
                        "session_token": null,
                        "state": "present",
                        "subnet_id": "subnet-0e2183fb4245ac220",
                        "tags": null,
                        "tenancy": null,
                        "termination_protection": null,
                        "user_data": null,
                        "validate_certs": true,
                        "volumes": null,
                        "vpc_subnet_id": "subnet-0e2183fb4245ac220",
                        "wait": true,
                        "wait_timeout": 600
                    }
                },
                "item": "backend"
            },
            {
                "ansible_loop_var": "item",
                "changed": false,
                "changes": [],
                "failed": false,
                "instance_ids": [
                    "i-0dafa75e35ce11f25"
                ],
                "instances": [
                    {
                        "ami_launch_index": 0,
                        "architecture": "x86_64",
                        "block_device_mappings": [
                            {
                                "device_name": "/dev/sda1",
                                "ebs": {
                                    "attach_time": "2025-06-26T06:15:28+00:00",
                                    "delete_on_termination": true,
                                    "status": "attached",
                                    "volume_id": "vol-00885d1ba328f7a1d"
                                }
                            }
                        ],
                        "boot_mode": "uefi-preferred",
                        "capacity_reservation_specification": {
                            "capacity_reservation_preference": "open"
                        },
                        "client_token": "338d427cfa6343e0a41e378f27a5b470",
                        "cpu_options": {
                            "core_count": 1,
                            "threads_per_core": 2
                        },
                        "current_instance_boot_mode": "uefi",
                        "ebs_optimized": false,
                        "ena_support": true,
                        "enclave_options": {
                            "enabled": false
                        },
                        "hibernation_options": {
                            "configured": false
                        },
                        "hypervisor": "xen",
                        "image_id": "ami-09c813fb71547fc4f",
                        "instance_id": "i-0dafa75e35ce11f25",
                        "instance_type": "t3.micro",
                        "launch_time": "2025-06-26T06:15:27+00:00",
                        "maintenance_options": {
                            "auto_recovery": "default",
                            "reboot_migration": "default"
                        },
                        "metadata_options": {
                            "http_endpoint": "enabled",
                            "http_protocol_ipv6": "disabled",
                            "http_put_response_hop_limit": 1,
                            "http_tokens": "optional",
                            "instance_metadata_tags": "disabled",
                            "state": "applied"
                        },
                        "monitoring": {
                            "state": "disabled"
                        },
                        "network_interfaces": [
                            {
                                "association": {
                                    "ip_owner_id": "amazon",
                                    "public_dns_name": "ec2-3-84-27-174.compute-1.amazonaws.com",
                                    "public_ip": "3.84.27.174"
                                },
                                "attachment": {
                                    "attach_time": "2025-06-26T06:15:27+00:00",
                                    "attachment_id": "eni-attach-01be6da584963894f",
                                    "delete_on_termination": true,
                                    "device_index": 0,
                                    "network_card_index": 0,
                                    "status": "attached"
                                },
                                "description": "",
                                "groups": [
                                    {
                                        "group_id": "sg-0a45058bd6da2342c",
                                        "group_name": "allow all-2"
                                    }
                                ],
                                "interface_type": "interface",
                                "ipv6_addresses": [],
                                "mac_address": "12:c2:b8:d9:39:9b",
                                "network_interface_id": "eni-0a175fd7c0c79d1e6",
                                "operator": {
                                    "managed": false
                                },
                                "owner_id": "038462766426",
                                "private_dns_name": "ip-172-31-85-41.ec2.internal",
                                "private_ip_address": "172.31.85.41",
                                "private_ip_addresses": [
                                    {
                                        "association": {
                                            "ip_owner_id": "amazon",
                                            "public_dns_name": "ec2-3-84-27-174.compute-1.amazonaws.com",
                                            "public_ip": "3.84.27.174"
                                        },
                                        "primary": true,
                                        "private_dns_name": "ip-172-31-85-41.ec2.internal",
                                        "private_ip_address": "172.31.85.41"
                                    }
                                ],
                                "source_dest_check": true,
                                "status": "in-use",
                                "subnet_id": "subnet-0e2183fb4245ac220",
                                "vpc_id": "vpc-0a922ea130a5a47ec"
                            }
                        ],
                        "network_performance_options": {
                            "bandwidth_weighting": "default"
                        },
                        "operator": {
                            "managed": false
                        },
                        "placement": {
                            "availability_zone": "us-east-1a",
                            "group_name": "",
                            "tenancy": "default"
                        },
                        "platform_details": "Red Hat Enterprise Linux",
                        "private_dns_name": "ip-172-31-85-41.ec2.internal",
                        "private_dns_name_options": {
                            "enable_resource_name_dns_a_record": false,
                            "enable_resource_name_dns_aaaa_record": false,
                            "hostname_type": "ip-name"
                        },
                        "private_ip_address": "172.31.85.41",
                        "product_codes": [],
                        "public_dns_name": "ec2-3-84-27-174.compute-1.amazonaws.com",
                        "public_ip_address": "3.84.27.174",
                        "root_device_name": "/dev/sda1",
                        "root_device_type": "ebs",
                        "security_groups": [
                            {
                                "group_id": "sg-0a45058bd6da2342c",
                                "group_name": "allow all-2"
                            }
                        ],
                        "source_dest_check": true,
                        "state": {
                            "code": 16,
                            "name": "running"
                        },
                        "state_transition_reason": "",
                        "subnet_id": "subnet-0e2183fb4245ac220",
                        "tags": {
                            "Name": "frontend"
                        },
                        "usage_operation": "RunInstances:0010",
                        "usage_operation_update_time": "2025-06-26T06:15:27+00:00",
                        "virtualization_type": "hvm",
                        "vpc_id": "vpc-0a922ea130a5a47ec"
                    }
                ],
                "invocation": {
                    "module_args": {
                        "aap_callback": null,
                        "access_key": null,
                        "availability_zone": null,
                        "aws_ca_bundle": "/etc/pki/tls/certs/ca-bundle.crt",
                        "aws_config": null,
                        "count": null,
                        "cpu_credit_specification": null,
                        "cpu_options": null,
                        "debug_botocore_endpoint_logs": false,
                        "detailed_monitoring": null,
                        "ebs_optimized": null,
                        "endpoint_url": null,
                        "exact_count": null,
                        "filters": {
                            "image-id": [
                                "ami-09c813fb71547fc4f"
                            ],
                            "instance-state-name": [
                                "pending",
                                "running",
                                "stopping",
                                "stopped"
                            ],
                            "subnet-id": [
                                "subnet-0e2183fb4245ac220"
                            ],
                            "tag:Name": [
                                "frontend"
                            ]
                        },
                        "hibernation_options": false,
                        "iam_instance_profile": null,
                        "image": null,
                        "image_id": "ami-09c813fb71547fc4f",
                        "instance_ids": [],
                        "instance_initiated_shutdown_behavior": null,
                        "instance_type": "t3.micro",
                        "key_name": null,
                        "launch_template": null,
                        "metadata_options": null,
                        "name": "frontend",
                        "network": null,
                        "placement_group": null,
                        "profile": null,
                        "purge_tags": true,
                        "region": "us-east-1",
                        "secret_key": null,
                        "security_group": "sg-0a45058bd6da2342c",
                        "security_groups": [],
                        "session_token": null,
                        "state": "present",
                        "subnet_id": "subnet-0e2183fb4245ac220",
                        "tags": null,
                        "tenancy": null,
                        "termination_protection": null,
                        "user_data": null,
                        "validate_certs": true,
                        "volumes": null,
                        "vpc_subnet_id": "subnet-0e2183fb4245ac220",
                        "wait": true,
                        "wait_timeout": 600
                    }
                },
                "item": "frontend"
            }
        ],
        "skipped": false
    }
